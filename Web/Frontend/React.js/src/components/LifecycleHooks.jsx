//LifecycleHooks
import React, {useState, useLayoutEffect, useEffect, useCallback, useMemo} from "react";

export default function LifecycleHooks() {

    const [count, setCount] = useState(0);
    let stateHook = () => {
        console.log("useState hook");
        setCount(count+1);
    }

    useLayoutEffect(() => {
        console.log("useLayoutEffect hook");
    }, [count])
    useEffect(() => {
        console.log("useEffect hook");
    }, [count])
    
    let callbackHook = useCallback(() => {
        console.log("useCallback hook");
        setCount(count+1);
    }, [count])
    let memoHook = useMemo(() => {
        console.log("useMemo hook");
        return count*2;
    }, [count])

    return (
        <>
            <p>{count}</p>
            <button type="button" onClick={stateHook}>Change</button>
            <button type="button" onClick={callbackHook}>Change</button>
            <p>{memoHook}</p>
        </>
    )
}
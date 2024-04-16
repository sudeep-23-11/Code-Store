export async function GET(req) {
    console.log(req.url);
    return Response.json({name: 'Get Request'});
}
export async function POST(req) {
    const data = await req.json();
    console.log(data);
    return Response.json({name: 'Post Request'});
}
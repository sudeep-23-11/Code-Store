// import React from 'react';

// export default function Router({params}) {

//     const slug = params.slug;

//     return (
//         <h1>{slug}</h1>
//     )
// }
export async function PUT(req) {
    return Response.json({name: 'Put Request'});
}
export async function PATCH(req) {
    return Response.json({name: 'Patch Request'});
}
export async function DELETE(req) {
    return Response.json({name: 'Delete Request'});
}
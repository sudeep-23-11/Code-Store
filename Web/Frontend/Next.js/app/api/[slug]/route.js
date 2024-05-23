export async function PUT(req, {params}) {
    console.log(params);
    return Response.json({name: 'Put Request'});
}
export async function PATCH(req) {
    return Response.json({name: 'Patch Request'});
}
export async function DELETE(req) {
    return Response.json({name: 'Delete Request'});
}
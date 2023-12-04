export async function GET(req) {
    console.log(req.url);
    return Response.json({name: 'get request'});
}
export async function POST(req) {
    const data = await req.json();
    console.log(data);
    return Response.json({name: 'post request'});
}
export async function PUT(req) {
    return Response.json({name: 'put request'});
}
export async function PATCH(req) {
    return Response.json({name: 'patch request'});
}
export async function DELETE(req) {
    return Response.json({name: 'delete request'});
}
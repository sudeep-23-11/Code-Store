# Type
* Monolithic
    * single unit system
    * tightly coupled components
* N-Tier
    * Layered
    * system is divided into logical layers
    * tightly coupled components at run time
    * communication via inter process calls
    * each layer is responsible for specific function
* Microservices
    * system is divided into independent services
    * loosely coupled components
    * communication via network calls
    * each service is responsible for specific function
* Service Oriented
    * similar as microservices
    * system is divided into services
    * communication via centralized ESB (Enterprise Service Bus)
* Serverless = servers managed by cloud provider
* Client Server
    * centralized server provides services
    * multiple clients request from server
* Peer to Peer = each node is both server and client
* Event Driven
    * asynchronous processing
    * decoupled components
    * communication via events
    * Event = change in system
    * Event Producer = send events
    * Event Consumer = receive events
    * Event Bus = store, route events
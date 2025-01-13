// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterGeneric",
    products: [
        .library(name: "TreeSitterGeneric", targets: ["TreeSitterGeneric"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterGeneric",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterGenericTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterGeneric",
            ],
            path: "bindings/swift/TreeSitterGenericTests"
        )
    ],
    cLanguageStandard: .c11
)

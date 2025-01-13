package tree_sitter_generic_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_generic "github.com/skyppex/tree-sitter-generic/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_generic.Language())
	if language == nil {
		t.Errorf("Error loading Generic grammar")
	}
}

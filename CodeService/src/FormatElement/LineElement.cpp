#include "CodeService/FormatElement/LineElement.h"

LineElement::LineElement()
	: FormatElement(TextRange())
{
}


FormatElementType LineElement::GetType()
{
	return FormatElementType::LineElement;
}

void LineElement::Serialize(FormatContext& ctx, std::optional<FormatElement::ChildIterator> selfIt, FormatElement& parent)
{
	ctx.PrintLine(1);
}

void LineElement::Diagnosis(DiagnosisContext& ctx, std::optional<FormatElement::ChildIterator> selfIt, FormatElement& parent)
{
	ctx.SetCharacterCount(0);
}

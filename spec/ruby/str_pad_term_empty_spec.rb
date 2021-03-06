require 'str_pad_term_empty'

RSpec.describe StrPadTermEmpty do
  it 'parses test properly' do
    r = StrPadTermEmpty.from_file('src/str_pad_term_empty.bin')

    expect(r.str_pad).to eq ''
    expect(r.str_term).to eq ''
    expect(r.str_term_and_pad).to eq ''
    expect(r.str_term_include).to eq '@'
  end
end

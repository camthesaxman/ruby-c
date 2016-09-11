signed int __fastcall ai_identify_item_effect(char a1, int a2)
{
  signed int result; // r0@2

  if ( a1 == 19 )
  {
    result = 1;
  }
  else if ( *(_BYTE *)(a2 + 4) & 4 )
  {
    result = 2;
  }
  else if ( *(_BYTE *)(a2 + 3) & 0x3F )
  {
    result = 3;
  }
  else if ( *(_BYTE *)a2 & 0x3F || *(_BYTE *)(a2 + 1) || *(_BYTE *)(a2 + 2) )
  {
    result = 4;
  }
  else if ( *(_BYTE *)(a2 + 3) & 0x80 )
  {
    result = 5;
  }
  else
  {
    result = 6;
  }
  return result;
}

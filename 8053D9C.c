signed int __fastcall sub_8053D9C(int a1)
{
  int v1; // r4@1
  signed int result; // r0@2

  v1 = a1;
  if ( (unsigned __int16)sub_8053D30(a1) == 1 )
  {
    result = 444;
  }
  else if ( (unsigned __int16)sub_8053D6C(v1) == 1 )
  {
    result = 406;
  }
  else
  {
    result = *(_WORD *)(get_mapheader_by_bank_and_number(*(_BYTE *)v1 & 0xFFFF, *(_BYTE *)(v1 + 1) & 0xFFFF) + 16);
  }
  return result;
}

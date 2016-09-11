int __fastcall sub_80FB9C0(int result)
{
  int v1; // r2@1

  v1 = 0;
  if ( gUnknown_083E7684[0] == 88 )
  {
_080FB9FC:
    result = (unsigned __int16)result;
  }
  else
  {
    while ( (unsigned __int16)gUnknown_083E7684[2 * v1] != (unsigned __int16)result )
    {
      v1 = (v1 + 1) & 0xFFFF;
      if ( gUnknown_083E7684[2 * v1] == 88 )
        goto _080FB9FC;
    }
    result = (unsigned __int16)word_83E7686[2 * v1];
  }
  return result;
}

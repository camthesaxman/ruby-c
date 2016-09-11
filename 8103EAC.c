signed int __fastcall sub_8103EAC(unsigned __int8 a1)
{
  char *v1; // r1@1
  signed int result; // r0@2
  __int16 v3; // r2@3

  v1 = &gSprites[68 * a1];
  if ( *((_WORD *)v1 + 24) )
  {
    v3 = *((_WORD *)v1 + 30);
    if ( *((_WORD *)v1 + 30) )
      *((_WORD *)v1 + 24) = 0;
    result = (unsigned __int8)v3;
  }
  else
  {
    result = 1;
  }
  return result;
}

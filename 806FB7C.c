_BOOL4 __fastcall sub_806FB7C(int a1)
{
  signed int v1; // r0@2

  a1 = (unsigned __int16)a1;
  if ( (unsigned __int16)a1 == 175 )
    v1 = 33721770;
  else
    v1 = (signed int)*(&gItemEffectTable + a1 - 13);
  return (*(_BYTE *)(v1 + 4) & 4) != 0;
}

int __fastcall sub_813EB4C(unsigned __int8 a1)
{
  __int16 v1; // r4@1
  int v2; // r2@1
  char *v3; // r0@2
  unsigned int v4; // r4@3
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)CreateSprite((int)"Ó\aÔ\a<±@\bL±@\b", 0, 0);
  if ( v2 != 64 )
  {
    v3 = &gSprites[68 * v2];
    *((_WORD *)v3 + 23) = v1;
    *((_WORD *)v3 + 24) = 0;
    *((_WORD *)v3 + 25) = 8;
    *((_WORD *)v3 + 26) = 24;
  }
  v4 = 0;
  do
  {
    SetOamMatrix((v4 + 18) & 0xFF, gUnknown_0840B188[v4], 0, 0, gUnknown_0840B188[v4]);
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 9 );
  return v6;
}

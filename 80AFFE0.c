int __fastcall sub_80AFFE0(unsigned __int8 a1)
{
  int v1; // r5@1
  signed int v2; // r3@1
  _BYTE *v3; // r2@1
  char *v4; // r1@4
  signed __int16 v5; // r0@4
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = (_BYTE *)33657656;
  do
  {
    if ( (unsigned int)*(_BYTE *)(v2 + 33785494) > 1 )
    {
      if ( v1 )
      {
        v4 = &gSprites[68 * *v3];
        v5 = 256;
      }
      else
      {
        v4 = &gSprites[68 * *v3];
        v5 = 180;
      }
      *((_WORD *)v4 + 16) = v5;
    }
    v3 += 4;
    ++v2;
  }
  while ( v2 <= 3 );
  return v7;
}

int __fastcall sub_813E7C0(unsigned __int8 a1)
{
  __int16 v1; // r4@1
  int v2; // r2@1
  char *v3; // r0@2
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)CreateSprite((int)"”\a‘\a»∞@\bÿ∞@\b", 0, 0);
  if ( v2 != 64 )
  {
    v3 = &gSprites[68 * v2];
    *((_WORD *)v3 + 23) = v1;
    *((_WORD *)v3 + 24) = -12;
    *((_WORD *)v3 + 25) = 0;
    *((_WORD *)v3 + 26) = 136;
  }
  return v5;
}

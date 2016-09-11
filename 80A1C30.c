int __fastcall sub_80A1C30(unsigned __int8 a1)
{
  int v1; // r3@1
  int i; // r4@1
  char *v3; // r1@2
  int v5; // [sp+10h] [bp-4h]@0

  v1 = 10 * a1 & 0xFF;
  for ( i = v1; v1 < i + 10; v1 = (v1 + 1) & 0xFF )
  {
    *(_WORD *)&gSprites[68 * *(_BYTE *)(v1 + 33660937) + 48] = 0;
    v3 = &gSprites[68 * *(_BYTE *)(v1 + 33660937) + 62];
    *v3 &= 0xFBu;
  }
  return v5;
}

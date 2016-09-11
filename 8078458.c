int __fastcall sub_8078458(int a1)
{
  int v1; // r3@1
  char *v2; // r0@2
  char *v3; // r0@2
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (signed int)*(_WORD *)(a1 + 46) <= 0 )
  {
    sub_8078104(a1);
  }
  else
  {
    --*(_WORD *)(a1 + 46);
    v2 = &gSprites[68 * *(_WORD *)(a1 + 52)];
    *((_WORD *)v2 + 18) += *(_WORD *)(v1 + 48);
    v3 = &gSprites[68 * *(_WORD *)(v1 + 52)];
    *((_WORD *)v3 + 19) += *(_WORD *)(v1 + 50);
  }
  return v5;
}

int __fastcall sub_8128174(int a1)
{
  char *v1; // r3@1
  __int16 v2; // r1@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = &gSprites[68 * *(_WORD *)(a1 + 46)];
  v2 = *(_WORD *)(a1 + 50);
  *(_WORD *)(a1 + 50) = v2 + 1;
  if ( !(v2 & 3) )
    *((_WORD *)v1 + 19) += *(_WORD *)(a1 + 48);
  if ( !(*(_WORD *)(a1 + 50) & 0xF) )
    *(_WORD *)(a1 + 48) = -*(_WORD *)(a1 + 48);
  return v4;
}

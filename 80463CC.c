int __fastcall sub_80463CC(int a1)
{
  int v1; // r3@1
  char *v2; // r0@2
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( *(_BYTE *)(a1 + 63) & 0x10 )
  {
    v2 = &gSprites[68 * *(_WORD *)(a1 + 46)];
    --*((_WORD *)v2 + 23);
    DestroySprite(v1);
  }
  return v4;
}

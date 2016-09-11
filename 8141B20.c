int __fastcall sub_8141B20(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  int *v3; // r0@2
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 36) = sine(*(_WORD *)(a1 + 48), 24);
  *(_WORD *)(v1 + 38) = cosine(*(_WORD *)(v1 + 48), 24);
  v2 = *(_WORD *)(v1 + 48) + 12;
  *(_WORD *)(v1 + 48) = v2;
  if ( v2 > 255 )
  {
    v3 = &dword_3004B20[10 * *(_WORD *)(v1 + 46)];
    --*((_WORD *)v3 + 16);
    FreeSpriteOamMatrix(v1);
    DestroySprite(v1);
  }
  return v5;
}

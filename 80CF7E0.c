int __fastcall sub_80CF7E0(int a1)
{
  int v1; // r3@1
  int v2; // r0@1
  int *v3; // r0@2
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  *(_WORD *)(v1 + 46) = v2 - 1;
  if ( v2 << 16 <= 0 )
  {
    v3 = &dword_3004B20[10 * *(_WORD *)(v1 + 60)];
    --*((_WORD *)v3 + 5);
    DestroySprite(v1);
  }
  return v5;
}

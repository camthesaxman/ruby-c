int __fastcall CameraUpdateCallback(int a1)
{
  int v1; // r3@1
  int v2; // r2@1
  char *v3; // r0@2
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 )
  {
    v3 = &gSprites[68 * v2];
    *(_DWORD *)(v1 + 8) = *((_WORD *)v3 + 25);
    *(_DWORD *)(v1 + 12) = *((_WORD *)v3 + 26);
  }
  return v5;
}

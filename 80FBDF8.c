int sub_80FBDF8()
{
  int v0; // r2@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = *(_DWORD *)(v20388CC + 32);
  if ( v0 )
  {
    *(_BYTE *)(v0 + 62) |= 4u;
    *(_DWORD *)(*(_DWORD *)(v20388CC + 32) + 28) = SpriteCallbackDummy;
  }
  return v2;
}

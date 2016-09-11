int __fastcall LoadCompressedObjectPicOverrideBuffer(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4@1
  int v3; // r5@1
  int v5; // [sp+0h] [bp-14h]@1
  int v6; // [sp+4h] [bp-10h]@1
  int v7; // [sp+10h] [bp-4h]@1

  v2 = a1;
  v3 = a2;
  LZ77UnCompWram(*a1, a2);
  v5 = v3;
  v6 = *((_WORD *)v2 + 2) | (*((_WORD *)v2 + 3) << 16);
  LoadSpriteSheet((int)&v5);
  return v7;
}

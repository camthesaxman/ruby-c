int __fastcall LoadCompressedObjectPic(_DWORD *a1)
{
  _DWORD *v1; // r4@1
  int v3; // [sp+0h] [bp-14h]@1
  int v4; // [sp+4h] [bp-10h]@1
  int v5; // [sp+10h] [bp-4h]@1

  v1 = a1;
  LZ77UnCompWram(*a1, 0x2000000);
  v3 = 0x2000000;
  v4 = *((_WORD *)v1 + 2) | (*((_WORD *)v1 + 3) << 16);
  LoadSpriteSheet((int)&v3);
  return v5;
}

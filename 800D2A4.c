int __fastcall LoadCompressedObjectPalette(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  int v3; // [sp+0h] [bp-14h]@1
  unsigned int v4; // [sp+4h] [bp-10h]@1
  int v5; // [sp+10h] [bp-4h]@1

  v1 = a1;
  LZ77UnCompWram(*a1, 0x2000000);
  v3 = 0x2000000;
  v4 = v4 & 0xFFFF0000 | *((_WORD *)v1 + 2);
  LoadSpritePalette((int)&v3);
  return v5;
}

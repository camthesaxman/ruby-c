int sub_800F02C()
{
  signed int v0; // r8@1
  signed int v1; // r7@1
  int v2; // r6@2
  int v3; // r5@2
  char v4; // r0@2
  int v6; // [sp+1Ch] [bp-4h]@0

  v0 = 0;
  v1 = 33700356;
  do
  {
    v2 = 32 * v0;
    v3 = v2 + 33700352;
    *(_WORD *)(v2 + 33700352) = GetMonData((char *)&unk_3004360 + 100 * v0, 11);
    *(_WORD *)(v3 + 2) = GetMonData((char *)&unk_3004360 + 100 * v0, 12);
    GetMonData((char *)&unk_3004360 + 100 * v0, 2);
    *(_BYTE *)(v3 + 15) = GetMonData((char *)&unk_3004360 + 100 * v0, 56);
    *(_WORD *)(v3 + 16) = GetMonData((char *)&unk_3004360 + 100 * v0, 57);
    *(_WORD *)(v3 + 18) = GetMonData((char *)&unk_3004360 + 100 * v0, 58);
    *(_DWORD *)(v2 + 33700372) = GetMonData((char *)&unk_3004360 + 100 * v0, 55);
    *(_DWORD *)(v1 + 20) = GetMonData((char *)&unk_3004360 + 100 * v0, 0);
    *(_BYTE *)(v3 + 28) = GetMonGender((char *)&unk_3004360 + 100 * v0);
    SkipExtCtrlCodes((_BYTE *)v1);
    v4 = GetMonData((char *)&unk_3004360 + 100 * v0, 3);
    *(_BYTE *)(v3 + 29) = v4;
    if ( v4 != 1 )
      sub_814A518(v1, 0);
    v1 += 32;
    ++v0;
  }
  while ( v0 <= 2 );
  memcpy(0x2000000, 33700352, 96);
  return v6;
}

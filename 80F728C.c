int sub_80F728C()
{
  void **v0; // r0@1
  int v1; // r2@1
  __int16 v3; // [sp+0h] [bp-8h]@1
  int v4; // [sp+4h] [bp-4h]@1

  v0 = GetTextWindowFrameGraphics((unsigned int)v2024EB8 >> 3);
  v1 = v20388B8;
  *(_DWORD *)(v20388B8 + 40) = *v0;
  *(_DWORD *)(v1 + 44) = v0[1];
  *(_BYTE *)(v1 + 4272) = 0;
  v3 = 0;
  CpuSet(&v3, v20388B8 + 48, 16779264);
  return v4;
}

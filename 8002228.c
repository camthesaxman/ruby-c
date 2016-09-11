int __fastcall SetOamMatrixRotationScaling(unsigned __int8 a1, signed __int16 a2, signed __int16 a3, unsigned __int16 a4)
{
  int v4; // r6@1
  signed __int16 v5; // r4@1
  int v6; // r5@1
  unsigned int v8; // [sp+0h] [bp-24h]@1
  unsigned int v9; // [sp+4h] [bp-20h]@1
  char v10; // [sp+8h] [bp-1Ch]@1
  int v11; // [sp+20h] [bp-4h]@1

  v4 = a1;
  v5 = a3;
  v6 = a4;
  v8 = v8 & 0xFFFF0000 | (unsigned __int16)ConvertScaleParam(a2);
  v8 = (unsigned __int16)v8 | (ConvertScaleParam(v5) << 16);
  v9 = v9 & 0xFFFF0000 | v6;
  ObjAffineSet(&v8, &v10, 1, 2);
  CopyOamMatrix(v4, (int)&v10);
  return v11;
}

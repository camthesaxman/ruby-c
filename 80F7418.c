int __fastcall sub_80F7418(char a1, __int16 a2, __int16 a3)
{
  __int16 v3; // r5@1
  __int16 v4; // r6@1
  unsigned int v5; // r3@1
  int v6; // r0@2
  int v8; // [sp+Ch] [bp-4h]@0

  v3 = a2;
  v4 = a3;
  *(_BYTE *)(v20388B8 + 5) = 0;
  *(_BYTE *)(v20388B8 + 4) = a1;
  v5 = 0;
  do
  {
    *(_BYTE *)(v20388B8 + 6 + v5) = ((signed int)*(_BYTE *)(v20388B8 + 4) >> v5) & 1;
    v6 = (v5 + 1) << 16;
    v5 = (v5 + 1) & 0xFFFF;
  }
  while ( v5 <= 3 );
  sub_814A7FC(v6);
  sub_80F761C(v3, v4, *v20388B8, *(_WORD *)(v20388B8 + 2));
  return v8;
}

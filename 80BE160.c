int __fastcall sub_80BE160(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = sub_80BFB94();
  *(_BYTE *)(v1 + 32) = v2;
  *(_BYTE *)(v1 + 33) = HIBYTE(v2);
  *(_BYTE *)(v1 + 34) = v2;
  *(_BYTE *)(v1 + 35) = HIBYTE(v2);
  return v4;
}

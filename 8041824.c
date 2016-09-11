int __fastcall unref_sub_8041824(int a1)
{
  int v1; // r6@1
  unsigned int v2; // r5@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  do
  {
    ZeroBoxMonData(v1 + 80 * v2);
    *(_DWORD *)(v1 + 272 + 4 * v2) = 0;
    sub_80417F4(v1 + 56 * v2 + 160);
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 1 );
  *(_WORD *)(v1 + 280) = 0;
  *(_BYTE *)(v1 + 282) = 0;
  return v4;
}

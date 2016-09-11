int __fastcall sub_80A9E3C(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned int v2; // r1@1
  int *v3; // r0@3
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  OpenLink();
  v2 = 0;
  do
  {
    LOWORD(gBlockRecvBuffer[64 * v2]) = 255;
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 3 );
  v3 = &dword_3004B20[10 * v1];
  *((_WORD *)v3 + 4) = 0;
  *v3 = (int)sub_80A9E80;
  return v5;
}

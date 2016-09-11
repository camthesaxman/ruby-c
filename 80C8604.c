int __fastcall sub_80C8604(unsigned __int8 a1)
{
  unsigned int v1; // r1@1
  int *v2; // r0@3
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = 0;
  do
  {
    LOWORD(gBlockRecvBuffer[64 * v1]) = 255;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 3 );
  v2 = &dword_3004B20[10 * a1];
  *((_WORD *)v2 + 4) = 0;
  *v2 = (int)sub_80C8644;
  return v4;
}

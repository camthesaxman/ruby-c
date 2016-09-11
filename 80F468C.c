int __fastcall sub_80F468C(int a1, unsigned __int8 a2)
{
  int v2; // r9@1
  int v3; // r5@3
  unsigned __int16 v4; // r6@3
  int v5; // r4@3
  unsigned int v6; // r0@4
  unsigned int v7; // r3@2
  int v8; // r0@7
  int v10; // [sp+18h] [bp-4h]@0

  v2 = a2;
  if ( *(_BYTE *)((a1 << 16 >> 14) + 0x200893F) & 0x40 )
  {
    v3 = *(_BYTE *)((a1 << 16 >> 14) + 0x200893D);
    v4 = *(_BYTE *)((a1 << 16 >> 14) + 0x200893E) & 0x1F;
    v5 = 5 * a2;
    *(_BYTE *)(5 * a2 + 0x2008FF0) = sub_80F44B0(v3, v4, 22, 0);
    *(_BYTE *)(v5 + 33591281) = sub_80F44B0(v3, v4, 47, 0);
    *(_BYTE *)(v5 + 33591282) = sub_80F44B0(v3, v4, 33, 0);
    *(_BYTE *)(v5 + 33591283) = sub_80F44B0(v3, v4, 24, 0);
    *(_BYTE *)(v5 + 33591284) = sub_80F44B0(v3, v4, 23, 0);
    if ( sub_80F44B0(v3, v4, 48, 0) == 255 )
      LOBYTE(v6) = 9;
    else
      v6 = sub_80F44B0(v3, v4, 48, 0) / 0x1D;
    *(_BYTE *)(v2 + 33589553) = v6;
    *(_BYTE *)(v2 + 33589556) = sub_80F44B0(v3, v4, 8, 0);
    sub_80F55AC(5 * v2 + 33591280, 20 * v2 + 33591300);
  }
  else
  {
    v7 = 0;
    do
    {
      *(_BYTE *)(v7 + 5 * a2 + 33591280) = 0;
      v8 = 4 * v7 + 20 * a2 + 0x2000000;
      *(_WORD *)(v8 + 36868) = 155;
      *(_WORD *)(v8 + 36870) = 91;
      v7 = (v7 + 1) & 0xFFFF;
    }
    while ( v7 <= 4 );
  }
  return v10;
}

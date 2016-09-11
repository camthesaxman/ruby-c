int __fastcall sub_806E574(unsigned __int8 a1, unsigned __int8 a2, __int16 a3, signed __int16 a4)
{
  int v4; // r6@1
  int v5; // r5@1
  unsigned int v6; // r0@1
  int v7; // r4@7
  int v9; // [sp+0h] [bp-28h]@1
  int v10; // [sp+4h] [bp-24h]@1
  int v11; // [sp+8h] [bp-20h]@1
  char v12; // [sp+Ch] [bp-1Ch]@2
  int v13; // [sp+10h] [bp-18h]@7
  int v14; // [sp+14h] [bp-14h]@1
  int v15; // [sp+24h] [bp-4h]@7

  v4 = a1;
  v5 = a2;
  v14 = -32768;
  v9 = (unsigned __int16)a4;
  v10 = (unsigned __int16)a3;
  v11 = 0;
  v6 = sub_8046200(a3, a4) << 24;
  if ( v6 >> 24 > 2 )
    v12 = v12 & 0xE0 | 4;
  if ( v6 >> 24 == 2 )
    v12 = v12 & 0xE0 | 5;
  if ( v6 >> 24 <= 1 )
    v12 = v12 & 0xE0 | 6;
  v13 = 256;
  v7 = *(&gUnknown_08376858[6 * v5] + v4);
  sub_80460C8(&v9, (int)&v14, *(&gUnknown_08376858[6 * v5] + v4));
  v7 -= 4;
  *(_WORD *)v7 = 12553;
  *(_WORD *)(v7 + 2) = 12554;
  *(_WORD *)(v7 + 16) = 12555;
  return v15;
}

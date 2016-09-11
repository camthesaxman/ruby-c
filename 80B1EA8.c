int __fastcall sub_80B1EA8(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r6@1
  signed __int16 v5; // r7@2
  signed int v6; // r4@2
  int v7; // r5@3
  int v8; // r3@3
  int *v9; // r0@8
  int v11; // [sp+10h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = (unsigned __int8)CreateTask((int)sub_80B1F4C, 10);
  if ( v2 << 24 <= 0 )
  {
    v5 = 0;
    v6 = v3 << 24;
    if ( v3 << 24 <= 0 )
    {
      LOWORD(v7) = 12;
      LOWORD(v8) = 0;
    }
    else
    {
      LOWORD(v7) = 0;
      LOWORD(v8) = 12;
    }
  }
  else
  {
    v5 = 9086;
    v6 = v3 << 24;
    if ( v3 << 24 <= 0 )
    {
      v7 = 3 * v2019217 & 0xFF;
      LOWORD(v8) = 0;
    }
    else
    {
      LOWORD(v7) = 0;
      v8 = 3 * v2019217 & 0xFF;
    }
  }
  v9 = &dword_3004B20[10 * v4];
  *((_WORD *)v9 + 4) = v5;
  *((_WORD *)v9 + 5) = v7;
  *((_WORD *)v9 + 6) = v6 >> 24;
  *((_WORD *)v9 + 7) = v8;
  v201920B &= 0xFEu;
  return v11;
}

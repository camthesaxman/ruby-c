int __fastcall sub_80C7374(unsigned __int8 a1)
{
  unsigned int v1; // r3@1
  _BYTE *v2; // r7@1
  __int16 v3; // r1@1
  __int16 v4; // r5@7
  __int16 v5; // r0@7
  signed int v6; // r0@7
  signed int v7; // r0@7
  __int16 v8; // r0@7
  int v10; // [sp+14h] [bp-4h]@0

  v1 = 40 * a1;
  v2 = &byte_3004B28[v1];
  v3 = *(_WORD *)&byte_3004B28[v1] + 1;
  *(_WORD *)v2 = v3;
  *((_WORD *)v2 + 2) = *(_WORD *)&byte_3004B28[v1 + 4] + 1;
  if ( v3 > 5 )
  {
    *(_WORD *)v2 = 0;
    ++*((_WORD *)v2 + 1);
  }
  if ( *((_WORD *)v2 + 1) == 19 )
  {
    DestroyTask(a1);
  }
  else
  {
    if ( gUnknown_083D294C[*((_WORD *)v2 + 1)] == 2 )
      dword_3004B20[v1 / 4] = (int)sub_80C7484;
    v4 = gUnknown_083D294C[*((_WORD *)v2 + 1)];
    v5 = sub_80C727C(*((_WORD *)v2 + 2));
    SetCameraPanning(v4, v5);
    v6 = sub_80C72A8(*((_WORD *)v2 + 2) + 30);
    sub_805BD90(1u, v2025739, v2025738, 3 - v4, ((v6 << 18) | 0x30000u) >> 16);
    v7 = sub_80C72A8(*((_WORD *)v2 + 2));
    sub_805BD90(2u, v2025739, v2025738, -v4, (unsigned int)((v7 << 17) - 196608) >> 16);
    v8 = sub_80C72A8(*((_WORD *)v2 + 2));
    sub_805BD90(3u, v2025739, v2025738, -3 - v4, 4 * v8);
  }
  return v10;
}

int __fastcall sub_80C72C4(unsigned __int8 a1)
{
  _WORD *v1; // r5@1
  signed int v2; // r0@1
  signed int v3; // r0@1
  __int16 v4; // r0@1
  int v5; // r0@1
  __int16 v6; // r0@3
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = &byte_3004B28[40 * a1];
  v2 = sub_80C72A8(*v1 + 30);
  sub_805BD90(1u, v2025739, v2025738, 3, ((v2 << 18) | 0x30000u) >> 16);
  v3 = sub_80C72A8(*v1);
  sub_805BD90(2u, v2025739, v2025738, 0, (unsigned int)((v3 << 17) - 196608) >> 16);
  v4 = sub_80C72A8(*v1);
  sub_805BD90(3u, v2025739, v2025738, -3, 4 * v4);
  v5 = *v1 + 1;
  *v1 = v5;
  if ( v5 << 16 == 1966080000 )
    *v1 = 0;
  v6 = sub_80C727C(*v1);
  SetCameraPanning(0, v6);
  return v8;
}

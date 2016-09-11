int __fastcall sub_80C7484(unsigned __int8 a1)
{
  unsigned __int8 v1; // r3@1
  _BYTE *v2; // r2@1
  __int16 v3; // r0@1
  __int16 v4; // r6@5
  int v6; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  v3 = *(_WORD *)v2 + 1;
  *(_WORD *)v2 = v3;
  if ( v3 > 5 )
  {
    *(_WORD *)v2 = 0;
    ++*((_WORD *)v2 + 1);
  }
  if ( *((_WORD *)v2 + 1) == 19 )
  {
    DestroyTask(v1);
  }
  else
  {
    v4 = gUnknown_083D294C[*((_WORD *)v2 + 1)];
    SetCameraPanning(v4, 0);
    sub_805BD90(1u, v2025739, v2025738, 3 - v4, 3);
    sub_805BD90(2u, v2025739, v2025738, -v4, -3);
    sub_805BD90(3u, v2025739, v2025738, -3 - v4, 0);
  }
  return v6;
}

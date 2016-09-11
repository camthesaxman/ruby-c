int __fastcall sub_80C77A0(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  _BYTE *v2; // r4@1
  signed __int16 *v3; // r6@1
  signed int v4; // r2@1
  signed __int16 v5; // r0@15
  unsigned __int8 v6; // r1@22
  unsigned __int8 v7; // r2@22
  void *v8; // r3@22
  int v10; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  v3 = (signed __int16 *)GetVarPointer(0x40B4u);
  v4 = *(_WORD *)v2;
  if ( v4 != 1 )
  {
    if ( v4 <= 1 )
    {
      if ( !*(_WORD *)v2 && !(v202F38F & 0x80) )
      {
        *((_WORD *)v2 + 1) = 0;
        *(_WORD *)v2 = 2;
      }
      return v10;
    }
    if ( v4 != 2 )
    {
      if ( v4 == 3 )
      {
        FlagReset(0x4001u);
        FlagReset(0x4000u);
        copy_saved_warp2_bank_and_enter_x_to_warp1();
        sp13E_warp_to_last_warp();
        DestroyTask(v1);
      }
      return v10;
    }
    goto _080C783E;
  }
  if ( word_300179E & 1 )
    *((_WORD *)v2 + 1) = 1;
  if ( sub_80A212C(0xFFu, v2025739, v2025738) << 24 )
  {
    if ( sub_810D9B0(1) == 1 )
    {
      if ( *v3 == 2 )
        v5 = 9;
      else
        v5 = 10;
      *v3 = v5;
      goto _080C7846;
    }
    *(_WORD *)v2 = 2;
_080C783E:
    if ( !*((_WORD *)v2 + 1) )
    {
      if ( *v3 == 2 )
      {
        v6 = v2025739;
        v7 = v2025738;
        v8 = &gUnknown_083D295F;
      }
      else
      {
        v6 = v2025739;
        v7 = v2025738;
        v8 = &gUnknown_083D2961;
      }
      exec_movement(0xFFu, v6, v7, (int)v8);
      *(_WORD *)v2 = 1;
      return v10;
    }
_080C7846:
    *(_WORD *)v2 = 3;
  }
  return v10;
}

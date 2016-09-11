int __fastcall sub_80BBA48(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r2@1
  signed int v3; // r0@1
  unsigned __int16 v4; // r0@10
  _BYTE *v5; // r1@10
  unsigned int v6; // r0@10
  int v8; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 == 1 )
  {
    if ( !(v202F38F & 0x80) )
      *((_WORD *)v2 + 4) = 2;
  }
  else if ( v3 > 1 )
  {
    if ( v3 == 2 )
    {
      v4 = VarGet(16468);
      v5 = (_BYTE *)(160 * v4 + 33714508);
      v6 = *(_BYTE *)(160 * v4 + 0x202714C);
      if ( v6 <= 0xFE )
        *v5 = v6 + 1;
      sub_80BBA14();
      warp_in();
      dword_300485C = (int)sub_8080990;
      SetMainCallback2((int)c2_load_new_map);
      DestroyTask(v1);
    }
  }
  else if ( !*((_WORD *)v2 + 4) )
  {
    *((_WORD *)v2 + 4) = 1;
  }
  return v8;
}

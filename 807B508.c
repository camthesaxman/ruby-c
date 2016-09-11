int __fastcall sub_807B508(unsigned __int8 a1)
{
  int v1; // r5@1
  char v2; // r0@4
  unsigned __int8 v3; // r6@8
  char *v4; // r4@8
  unsigned int v5; // r0@9
  int v6; // r4@9
  unsigned int v7; // r0@11
  unsigned int v8; // r0@12
  int v9; // r0@15
  int v10; // r0@16
  int v11; // r2@17
  int v13; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( a1 < (unsigned int)v2024A68 )
  {
    if ( !(v20239F8 & 0x80) || a1 )
    {
      if ( v20239F8 & 0x200 && !a1 )
        return v13;
      v2 = battle_make_oam_normal_battle(a1);
    }
    else
    {
      v2 = battle_make_oam_safari_battle();
    }
    v3 = v2;
    v4 = &byte_3004340[v1];
    byte_3004340[v1] = v2;
    sub_8043F44(v1);
    sub_8043DFC(v3);
    if ( battle_side_get_owner(v1) << 24 )
    {
      v5 = (unsigned __int8)*v4;
      v6 = 2 * v1;
      sub_8045A5C(v5, (int)&unk_30045C0 + 100 * *(_WORD *)(2 * v1 + 0x2024A6A), 0);
    }
    else if ( v20239F8 & 0x80 )
    {
      v7 = (unsigned __int8)*v4;
      v6 = 2 * v1;
      sub_8045A5C(v7, (int)&dword_3004360[25 * *(_WORD *)(2 * v1 + 0x2024A6A)], 0xAu);
    }
    else
    {
      v8 = (unsigned __int8)*v4;
      v6 = 2 * v1;
      sub_8045A5C(v8, (int)&dword_3004360[25 * *(_WORD *)(2 * v1 + 0x2024A6A)], 0);
    }
    if ( (unsigned __int8)battle_get_per_side_status(v1) != 3 && (unsigned __int8)battle_get_per_side_status(v1) != 2 )
    {
      v10 = (unsigned __int8)byte_3004340[v1];
      nullsub_11();
    }
    else
    {
      v9 = (unsigned __int8)byte_3004340[v1];
      nullsub_11();
    }
    if ( battle_side_get_owner(v1) << 24 )
    {
      if ( !GetMonData((int)&unk_30045C0 + 100 * *(_WORD *)(v6 + 33704554), 57, v11) )
        sub_8043DB0(v3);
    }
    else if ( !(v20239F8 & 0x80) && !GetMonData((int)&dword_3004360[25 * *(_WORD *)(v6 + 33704554)], 57, v11) )
    {
      sub_8043DB0(v3);
    }
  }
  return v13;
}

int __fastcall sub_80701DC(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r2@2
  int v3; // r0@2
  unsigned __int8 v4; // r0@3
  int v6; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( v201B27E == 1 )
  {
    sub_80A9424(v201C006, 1);
    v3 = GetMonData((int)&dword_3004360[25 * v201C005], 11, v2);
    if ( v3 )
    {
      v4 = battle_type_is_double(v3);
      task_pc_turn_off(&gUnknown_083769A8[12 * v4] + 2 * v201C005, 3u);
      v201B261 = 2;
    }
    v201B27E = 0;
  }
  ++v201C005;
  if ( v201C005 == 6 )
  {
    v202E8F4 = 0;
    if ( v201B280 )
    {
      sub_80A9538(v201C006, 1);
      dword_3004B20[10 * v1] = v201C010;
    }
    else
    {
      dword_3004B20[10 * v1] = (int)TaskDummy;
      sub_806E834((int)&gUnknown_0840EF85, 1u);
      CreateTask(sub_806FB0C, 8);
    }
    byte_3005CE0 = 0;
  }
  else
  {
    sub_8070088(v1);
  }
  return v6;
}

signed int __fastcall sub_8068A64(int a1, unsigned __int16 a2)
{
  int v2; // r6@1
  int v3; // r5@1
  int v4; // r4@1
  signed int result; // r0@4
  int v6; // r0@11

  v2 = a1;
  v3 = a2;
  v4 = (char)map_warp_check_packed(33744936, a1);
  if ( v4 == -1 || (sub_8068B30(v3) & 0xFF) != 1 )
  {
    result = 0;
  }
  else
  {
    walkrun_find_lowest_active_bit_in_bitfield();
    sub_8068C30(33744936, v4, v2);
    if ( (unsigned __int8)MetatileBehavior_IsEscalator((unsigned __int8)v3) == 1 )
    {
      sub_8080F2C((unsigned __int8)v3);
      result = 1;
    }
    else if ( (unsigned __int8)sub_8057798(v3) == 1 )
    {
      sub_8080F48();
      result = 1;
    }
    else if ( (unsigned __int8)is_role_x68(v3) == 1 )
    {
      sub_8080F58();
      result = 1;
    }
    else if ( (unsigned __int8)MetatileBehavior_IsAquaHideoutWarp(v3) == 1 )
    {
      sub_8080F68(1);
      result = 1;
    }
    else
    {
      v6 = (unsigned __int8)sub_8057804(v3);
      if ( v6 == 1 )
      {
        script_env_1_execute_new_script((int)&gUnknown_081C6BDE);
        result = 1;
      }
      else
      {
        sub_8080E88(v6);
        result = 1;
      }
    }
  }
  return result;
}

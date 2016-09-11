int sub_807CA34()
{
  int v1; // [sp+14h] [bp-4h]@0

  if ( v202FEB8 == v202FEB9 )
  {
    call_via_r0(*(&off_8396FCC + 4 * v202FEB8));
  }
  else if ( !(unsigned __int8)call_via_r0(*(&off_8396FD4 + 4 * v202FEB8)) )
  {
    call_via_r0(*(&gUnknown_08396FC8 + 4 * v202FEB9));
    v202FEAB = 0;
    v202FEAE = 0;
    v202FEB8 = v202FEB9;
    v202FEBB = 1;
  }
  call_via_r0(*(&gUnknown_083970B8 + v202FEAE));
  return v1;
}

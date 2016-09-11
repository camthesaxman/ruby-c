int move_anim_waiter()
{
  char v0; // r0@2
  int v2; // [sp+0h] [bp-4h]@0

  if ( v202F7B0 > 0 )
  {
    v0 = v202F7B0 - 1;
  }
  else
  {
    v202F7AC = sub_80759D0;
    v0 = 0;
  }
  v202F7B0 = v0;
  return v2;
}

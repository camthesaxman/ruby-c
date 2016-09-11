int ma04_wait_countdown()
{
  int v1; // [sp+4h] [bp-4h]@0

  ++v202F7A4;
  v202F7B0 = *v202F7A4;
  if ( !(v202F7B0 << 24) )
    v202F7B0 = -1;
  ++v202F7A4;
  v202F7AC = move_anim_waiter;
  return v1;
}

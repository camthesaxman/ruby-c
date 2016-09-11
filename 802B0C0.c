int atkE7_castform_switch()
{
  int v0; // r4@1
  int v2; // [sp+8h] [bp-4h]@0

  ++v2024C10;
  v0 = (unsigned __int8)castform_switch(v2016003);
  if ( v0 )
  {
    b_push_move_exec((int)&gUnknown_081D977D);
    v201609B = v0 - 1;
  }
  return v2;
}

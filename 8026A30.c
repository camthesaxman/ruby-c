int atk91_givemoney()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( v20239F8 & 2 || !v2024D1A )
  {
    ++v2024C10;
  }
  else
  {
    sub_80B79B8(33708996, v2016056 * v2024D1A);
    byte_30041C0[0] = -3;
    byte_30041C1 = 1;
    word_30041C2 = 1282;
    byte_30041C4 = v2024D1A;
    byte_30041C5 = (unsigned __int16)(v2024D1A & 0xFF00) >> 8;
    byte_30041C6 = -1;
    b_movescr_stack_push(v2024C10 + 1);
    v2024C10 = &gUnknown_081D95DB;
  }
  return v1;
}

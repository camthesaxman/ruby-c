int __fastcall sub_8141DAC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r2@1
  __int16 *v2; // r1@2
  signed __int16 v3; // r0@2
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  switch ( v2017840 )
  {
    case 0x53u:
      v2 = word_3004B00;
      v3 = 1;
      break;
    case 0xFAu:
      v2 = word_3004B00;
      v3 = 2;
      break;
    case 0x80u:
      v2 = word_3004B00;
      v3 = 3;
      break;
    case 0x148u:
      v2 = word_3004B00;
      v3 = 4;
      break;
    default:
      v2 = word_3004B00;
      v3 = 0;
      break;
  }
  *v2 = v3;
  move_anim_task_del(v1);
  return v5;
}

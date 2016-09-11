int __fastcall sub_807BB88(unsigned __int8 a1)
{
  signed __int16 v1; // r3@1
  __int16 v2; // r5@3
  signed __int16 v3; // r2@3
  int v5; // [sp+8h] [bp-4h]@0

  v1 = 0;
  if ( (unsigned int)v2017840 - 15 > 0x2B )
  {
def_807BBA4:
    move_anim_task_del(a1);
  }
  else
  {
    switch ( v2017840 )
    {
      case 0xFu:
        v2 = 0;
        v3 = 0;
        break;
      case 0x10u:
        v2 = 0;
        v3 = 1;
        break;
      case 0x11u:
        v2 = 0;
        v3 = 3;
        break;
      case 0x12u:
        v2 = 0;
        v3 = 5;
        break;
      case 0x13u:
        v2 = 0;
        v3 = 6;
        break;
      case 0x14u:
        v2 = 0;
        v3 = 2;
        break;
      case 0x15u:
        v2 = 0;
        v3 = 4;
        break;
      case 0x16u:
        v2 = 1;
        v3 = 0;
        break;
      case 0x17u:
        v2 = 1;
        v3 = 1;
        break;
      case 0x18u:
        v2 = 1;
        v3 = 3;
        break;
      case 0x19u:
        v2 = 1;
        v3 = 5;
        break;
      case 0x1Au:
        v2 = 1;
        v3 = 6;
        break;
      case 0x1Bu:
        v2 = 1;
        v3 = 2;
        break;
      case 0x1Cu:
        v2 = 1;
        v3 = 4;
        break;
      case 0x27u:
        v2 = 0;
        goto _0807BCD2;
      case 0x28u:
        v2 = 0;
        goto _0807BCDA;
      case 0x29u:
        v2 = 0;
        goto _0807BCE2;
      case 0x2Au:
        v2 = 0;
        goto _0807BCEA;
      case 0x2Bu:
        v2 = 0;
        goto _0807BCF2;
      case 0x2Cu:
        v2 = 0;
        goto _0807BCFA;
      case 0x2Du:
        v2 = 0;
        goto _0807BD02;
      case 0x2Eu:
        v2 = 1;
_0807BCD2:
        v3 = 0;
        v1 = 1;
        break;
      case 0x2Fu:
        v2 = 1;
_0807BCDA:
        v3 = 1;
        v1 = 1;
        break;
      case 0x30u:
        v2 = 1;
_0807BCE2:
        v3 = 3;
        v1 = 1;
        break;
      case 0x31u:
        v2 = 1;
_0807BCEA:
        v3 = 5;
        v1 = 1;
        break;
      case 0x32u:
        v2 = 1;
_0807BCF2:
        v3 = 6;
        v1 = 1;
        break;
      case 0x33u:
        v2 = 1;
_0807BCFA:
        v3 = 2;
        v1 = 1;
        break;
      case 0x34u:
        v2 = 1;
_0807BD02:
        v3 = 4;
        v1 = 1;
        break;
      case 0x37u:
        v2 = 0;
        goto _0807BD12;
      case 0x38u:
        v2 = 0;
        goto _0807BD1A;
      case 0x39u:
        v2 = 1;
_0807BD12:
        v3 = 255;
        v1 = 0;
        break;
      case 0x3Au:
        v2 = 1;
_0807BD1A:
        v3 = 255;
        v1 = 1;
        break;
      default:
        goto def_807BBA4;
    }
    word_3004B00[0] = v2;
    word_3004B02 = v3;
    word_3004B04 = 0;
    word_3004B06 = 0;
    word_3004B08 = v1;
    dword_3004B20[10 * a1] = (int)sub_80E32E0;
    call_via_r1(a1, sub_80E32E0);
  }
  return v5;
}

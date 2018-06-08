-- phpMyAdmin SQL Dump
-- version 3.4.5
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: Nov 04, 2016 at 09:59 AM
-- Server version: 5.5.16
-- PHP Version: 5.3.8

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `irctc`
--

-- --------------------------------------------------------

--
-- Table structure for table `admin_details`
--

CREATE TABLE IF NOT EXISTS `admin_details` (
  `user_name` varchar(20) NOT NULL,
  `password` varchar(20) NOT NULL,
  `f_name` varchar(25) NOT NULL,
  `l_name` varchar(25) NOT NULL,
  `gender` char(1) NOT NULL,
  `dob` date NOT NULL,
  `address` varchar(100) NOT NULL,
  `email` varchar(50) NOT NULL,
  `contact_no` int(11) NOT NULL,
  `status` varchar(10) NOT NULL DEFAULT 'active',
  PRIMARY KEY (`user_name`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `admin_details`
--

INSERT INTO `admin_details` (`user_name`, `password`, `f_name`, `l_name`, `gender`, `dob`, `address`, `email`, `contact_no`, `status`) VALUES
('admin', 'A123@@asd', 'Railway', 'Manager', 'm', '2006-02-14', 'Panipat', 'admin@gmail.com', 2147483647, 'active');

-- --------------------------------------------------------

--
-- Table structure for table `bookingid`
--

CREATE TABLE IF NOT EXISTS `bookingid` (
  `id` int(10) unsigned NOT NULL,
  `pnr` varchar(20) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `bookingid`
--

INSERT INTO `bookingid` (`id`, `pnr`) VALUES
(0, 'PNR3767020'),
(1, 'PNR4794811'),
(2, 'PNR9527571'),
(3, 'PNR5500143'),
(4, 'PNR7443654'),
(5, 'PNR6088505'),
(6, 'PNR3388896'),
(7, 'PNR1777937'),
(8, 'PNR3365528'),
(9, 'PNR2918279'),
(10, 'PNR2640910'),
(11, 'PNR9054011'),
(12, 'PNR4414212'),
(13, 'PNR3588813'),
(14, 'PNR1056714'),
(15, 'PNR1753515'),
(16, 'PNR1494616'),
(17, 'PNR5547017'),
(18, 'PNR6719018'),
(19, 'PNR9709819'),
(20, 'PNR9323120'),
(21, 'PNR9237421'),
(22, 'PNR7464422'),
(23, 'PNR9050023'),
(24, 'PNR5643024'),
(25, 'PNR9098625'),
(26, 'PNR3277226'),
(27, 'PNR9809127'),
(28, 'PNR8314728'),
(29, 'PNR8545329'),
(30, 'PNR8768130'),
(31, 'PNR7010231'),
(32, 'PNR2564132'),
(33, 'PNR9288533'),
(34, 'PNR9252434'),
(35, 'PNR2720535'),
(36, 'PNR2521636'),
(37, 'PNR1262737'),
(38, 'PNR4045338'),
(39, 'PNR8791339'),
(40, 'PNR3786240'),
(41, 'PNR3022441'),
(42, 'PNR8163642'),
(43, 'PNR3290543'),
(44, 'PNR8570544'),
(45, 'PNR7301045'),
(46, 'PNR5569846'),
(47, 'PNR9131747'),
(48, 'PNR7563048'),
(49, 'PNR6451149'),
(50, 'PNR5234350'),
(51, 'PNR7914851'),
(52, 'PNR7157352'),
(53, 'PNR9989253'),
(54, 'PNR2415354'),
(55, 'PNR6665655'),
(56, 'PNR7930956'),
(57, 'PNR5636757'),
(58, 'PNR5366858'),
(59, 'PNR7374459'),
(60, 'PNR3050560'),
(61, 'PNR9534861'),
(62, 'PNR2977462'),
(63, 'PNR8708063'),
(64, 'PNR3721864'),
(65, 'PNR2570565'),
(66, 'PNR6708266'),
(67, 'PNR7754167'),
(68, 'PNR2168668'),
(69, 'PNR7717369');

-- --------------------------------------------------------

--
-- Table structure for table `cnfpassengerdetail`
--

CREATE TABLE IF NOT EXISTS `cnfpassengerdetail` (
  `pnr` varchar(20) NOT NULL,
  `fare` int(10) unsigned NOT NULL,
  `userid` varchar(20) NOT NULL,
  `pname` varchar(20) NOT NULL,
  `page` int(10) unsigned NOT NULL,
  `gender` varchar(10) NOT NULL,
  `concession_type` varchar(20) NOT NULL,
  KEY `pnr` (`pnr`),
  KEY `userid` (`userid`),
  KEY `concession_type` (`concession_type`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `cnfpassengerdetail`
--

INSERT INTO `cnfpassengerdetail` (`pnr`, `fare`, `userid`, `pname`, `page`, `gender`, `concession_type`) VALUES
('PNR7567071', 1000, 'abhi1121', 'Anjesh/krishnakant', 12, 'male', 'General'),
('PNR7443654', 4990, 'abhi1121', 'asdfg', 12, 'male', 'General'),
('PNR9054011', 1000, 'ram1121', 'qwertyu', 12, 'male', 'General'),
('PNR5636757', 1000, 'a1121', 'qwertyu', 12, 'male', 'General'),
('PNR2570565', 1990, 'a1121', 'qwerty', 12, 'male', 'General'),
('PNR6708266', 4990, 'a1121', 'qwerty', 12, 'male', 'General'),
('PNR7374459', 2000, 'a1121', 'qwertyu1', 12, 'male', 'General'),
('PNR2168668', 1000, 'a1121', 'qwerty', 12, 'male', 'General'),
('PNR7717369', 3990, 'a1121', 'abhishek kumar', 12, 'male', 'General');

-- --------------------------------------------------------

--
-- Stand-in structure for view `cnfreservation`
--
CREATE TABLE IF NOT EXISTS `cnfreservation` (
`pnr` varchar(20)
,`train_id` varchar(10)
,`train_name` varchar(30)
,`train_type` varchar(20)
,`source` varchar(20)
,`destination` varchar(20)
,`jdate` date
,`seat_type` varchar(10)
,`no_of_seat` int(10) unsigned
,`coach_no` char(1)
,`seat_no` int(10) unsigned
);
-- --------------------------------------------------------

--
-- Table structure for table `cnfreservationdetail`
--

CREATE TABLE IF NOT EXISTS `cnfreservationdetail` (
  `pnr` varchar(20) NOT NULL DEFAULT '',
  `train_id` varchar(10) NOT NULL,
  `source` varchar(20) NOT NULL,
  `destination` varchar(20) NOT NULL,
  `jdate` date NOT NULL,
  `seat_type` varchar(10) NOT NULL,
  `no_of_seat` int(10) unsigned NOT NULL DEFAULT '1',
  `coach_no` char(1) NOT NULL,
  `seat_no` int(10) unsigned NOT NULL,
  PRIMARY KEY (`pnr`),
  KEY `train_id` (`train_id`),
  KEY `source` (`source`),
  KEY `destination` (`destination`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `cnfreservationdetail`
--

INSERT INTO `cnfreservationdetail` (`pnr`, `train_id`, `source`, `destination`, `jdate`, `seat_type`, `no_of_seat`, `coach_no`, `seat_no`) VALUES
('PNR2168668', '12395', 'PAT', 'ARA', '2016-04-29', 'FIRSTAC', 1, 'B', 1),
('PNR2570565', '12395', 'KAN', 'DEL', '2016-04-26', 'FIRSTAC', 1, 'B', 1),
('PNR5636757', '12395', 'PAT', 'ARA', '2016-04-26', 'FIRSTAC', 1, 'B', 1),
('PNR6708266', '12395', 'PAT', 'DEL', '2016-04-26', 'FIRSTAC', 1, 'B', 2),
('PNR7374459', '12395', 'ARA', 'KAN', '2016-04-26', 'FIRSTAC', 1, 'B', 1),
('PNR7443654', '12395', 'PAT', 'DEL', '2016-04-22', 'FIRSTAC', 1, 'B', 1),
('PNR7567071', '12344', 'PAT', 'ARA', '2016-04-21', 'FIRSTAC', 1, 'B', 1),
('PNR7717369', '12395', 'ARA', 'DEL', '2016-04-29', 'FIRSTAC', 1, 'B', 1),
('PNR9054011', '12344', 'PAT', 'ARA', '2016-04-21', 'FIRSTAC', 1, 'B', 1);

-- --------------------------------------------------------

--
-- Table structure for table `coach`
--

CREATE TABLE IF NOT EXISTS `coach` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `seat_type` varchar(20) NOT NULL,
  `coach_no` char(1) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=5 ;

--
-- Dumping data for table `coach`
--

INSERT INTO `coach` (`id`, `seat_type`, `coach_no`) VALUES
(1, 'SLEEPER', 'A'),
(2, 'FIRSTAC', 'B'),
(3, 'SECONDAC', 'C'),
(4, 'THIRDAC', 'D');

-- --------------------------------------------------------

--
-- Table structure for table `concession`
--

CREATE TABLE IF NOT EXISTS `concession` (
  `concession_type` varchar(20) NOT NULL,
  `concession_percentage` int(10) unsigned NOT NULL,
  PRIMARY KEY (`concession_type`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `concession`
--

INSERT INTO `concession` (`concession_type`, `concession_percentage`) VALUES
('Gazetted Officer', 40),
('General', 0),
('Senior Citizen', 50),
('Student', 20);

-- --------------------------------------------------------

--
-- Table structure for table `payment_details`
--

CREATE TABLE IF NOT EXISTS `payment_details` (
  `cardno` bigint(20) unsigned NOT NULL,
  `cardtype` varchar(10) NOT NULL,
  `cvvno` int(10) unsigned NOT NULL,
  `exdate` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `payment_details`
--

INSERT INTO `payment_details` (`cardno`, `cardtype`, `cvvno`, `exdate`) VALUES
(123456, 'master', 121, '2016-03'),
(123456, 'master', 121, '2016-03'),
(12345, 'master', 1212, '2016-04'),
(123456, 'master', 123, '2016-04'),
(12345, 'master', 122, '2016-04'),
(123456, 'master', 12121, '2016-04'),
(1234567, 'master', 123456, '2016-04'),
(12345678, 'master', 12345, '2016-04'),
(123456, 'master', 121, '2016-04'),
(21345678, 'visa', 121, '2016-04'),
(123456, 'master', 123, '2016-03'),
(1234, 'master', 1234, '2016-04'),
(12345221, 'master', 121, '2016-04'),
(12345, 'master', 1212, '2016-04'),
(1234566, 'master', 12, '2016-04'),
(1234567, 'master', 12345, '2016-04'),
(132456, 'master', 2345, '2016-04'),
(123456, 'master', 122, '2016-04'),
(123456, 'master', 1212, '2016-04'),
(123456, 'master', 1212, '2016-04'),
(123456, 'master', 232, '2016-04'),
(123456, 'master', 122, '2016-04'),
(123452345, 'master', 12321312, '2016-04'),
(1234567, 'master', 1212, '2016-04'),
(1234567, 'master', 122, '2016-04'),
(123456, 'master', 1212, '2016-04'),
(1234567, 'master', 1212, '2016-04'),
(123456, 'master', 121, '2016-04'),
(1234567, 'master', 1212, '2016-04'),
(123456, 'master', 123, '2016-04'),
(123456, 'master', 12345, '2016-04'),
(123456, 'master', 12324354, '2016-04'),
(1234567, 'master', 123, '2016-04'),
(123456, 'master', 123, '2016-04'),
(12345, 'master', 121, '2016-04'),
(123456, 'master', 121, '2016-03'),
(12345, 'visa', 123, '2016-04'),
(12345, 'master', 233, '2016-04'),
(123456, 'master', 1212, '2016-04'),
(123456, 'master', 122, '2016-04'),
(123456, 'master', 123, '2016-04'),
(12311, 'master', 12121, '2016-04'),
(1212121, 'master', 12121, '2016-04'),
(2134567, 'master', 1234, '2016-04'),
(1234567, 'master', 122, '2016-04'),
(12121212, 'master', 1212, '2016-04'),
(123456, 'master', 122, '2016-04'),
(12121212, 'master', 2121, '2016-03'),
(12345678, 'master', 121, '2016-04'),
(1234567, 'master', 1212, '2016-03'),
(1234567, 'master', 21212, '2016-04'),
(1234567, 'master', 12345, '2016-04'),
(1234567, 'master', 123, '2016-04'),
(1234567, 'visa', 123, '2016-04'),
(123456, 'master', 123456, '2016-04'),
(123456, 'master', 1234, '2016-04'),
(123456, 'master', 123, '2016-04'),
(12345, 'master', 1212, '2016-04'),
(12345, 'master', 12345, '2016-04'),
(12345, 'master', 12345, '2016-04'),
(123456, 'master', 1234, '2016-04'),
(123456, 'master', 123, '2016-04'),
(1234, 'master', 121, '2016-04'),
(123423, 'master', 122, '2016-04'),
(12345, 'master', 123, '2016-04'),
(12345, 'master', 122, '2016-04'),
(12345, 'master', 12345, '2016-04'),
(1234566, 'master', 1234, '2016-04'),
(12345, 'master', 1232, '2016-04'),
(12345, 'master', 123, '2016-04'),
(12345, 'master', 12345, '2016-04'),
(12345, 'master', 12345, '2016-04'),
(1324567, 'master', 121, '2016-04'),
(1234567, 'master', 1212, '2016-04'),
(12345678, 'master', 122, '2016-04'),
(12345, 'master', 123, '2016-04'),
(123456, 'master', 12345, '2016-04'),
(123456, 'master', 121, '2016-04'),
(123456, 'master', 123, '2016-04'),
(1234567, 'master', 12121, '2016-04'),
(123456, 'master', 12345, '2016-04'),
(12345, 'master', 123, '2016-04'),
(1234567, 'master', 123456, '2016-04'),
(12345, 'master', 1234, '2016-04'),
(123456, 'master', 12345, '2016-04'),
(123456, 'master', 1234567, '2016-04'),
(1221, 'master', 12121212, '2016-04'),
(12345, 'master', 1234, '2016-04'),
(1234567, 'master', 12345678, '2016-04'),
(1234567, 'master', 11234, '2016-04'),
(1234567890, 'master', 123, '2016-04'),
(12345678, 'master', 1234, '2016-04'),
(12345678, 'master', 1234, '2016-04'),
(1234567, 'master', 12, '2016-04'),
(12345678, 'master', 122, '2016-04'),
(1234567, 'master', 123, '2016-04'),
(123478, 'visa', 123, '2016-04'),
(12467890, 'master', 122, '2016-04'),
(123456789, 'master', 1234, '2016-04'),
(1234567, 'master', 123, '2016-04'),
(123456, 'master', 123, '2016-04'),
(123456, 'master', 1234, '2016-04'),
(123456, 'master', 1234, '2016-04'),
(1324567, 'master', 12345, '2016-04'),
(123456, 'master', 1234, '2016-04'),
(1234567, 'master', 2345, '2016-03'),
(123456, 'master', 12345, '2016-04'),
(12345, 'master', 121, '2016-04'),
(123456, 'master', 121, '2016-03'),
(1234567, 'master', 12345, '2016-04'),
(1234567, 'master', 121, '2016-04'),
(12345, 'master', 122, '2016-04'),
(123456, 'master', 1212, '2016-04'),
(123456, 'master', 123456, '2016-04'),
(123456, 'master', 121, '2016-04'),
(123456, 'master', 122, '2016-04'),
(1234, 'master', 12, '2016-04'),
(123456, 'master', 122, '2016-04'),
(123456, 'visa', 212, '2016-04'),
(123456, 'master', 121, '2016-04'),
(12345, 'master', 123, '2016-04'),
(123456, 'master', 122, '2016-04'),
(123456, 'master', 121, '2016-04'),
(123456, 'master', 1234, '2016-04'),
(123456, 'master', 122, '2016-04'),
(123456789, 'master', 123, '2016-04'),
(1234567890, 'master', 12, '2016-04'),
(123467890, 'master', 1213, '2016-04'),
(123456789, 'master', 122, '2016-04'),
(123456, 'master', 123, '2016-04'),
(123456789, 'master', 123, '2016-03'),
(12345678, 'master', 132, '2016-04'),
(1234567, 'master', 1234, '2016-04'),
(1234567, 'master', 212, '2016-04'),
(123456789, 'master', 1212, '2016-04'),
(123456, 'master', 123, '2016-04'),
(123456, 'master', 123, '2016-04'),
(12345678, 'master', 123, '2016-04'),
(12345, 'master', 123, '2016-04'),
(1234567, 'master', 1234, '2016-04'),
(1234567, 'master', 123, '2016-04'),
(12345, 'master', 123, '2016-04'),
(12345678, 'master', 123, '2016-04'),
(12345678, 'master', 123, '2016-04'),
(12345678, 'master', 123, '2016-04'),
(1234567, 'master', 123, '2016-04'),
(12345, 'master', 123, '2016-04'),
(123478, 'master', 1234, '2016-04'),
(12345678, 'master', 123, '2016-04'),
(123456, 'master', 123, '2016-04'),
(12345678, 'master', 1234567, '2016-04'),
(12345678, 'master', 1234, '2016-04'),
(12345678, 'master', 123, '2016-04'),
(12345678, 'master', 123, '2016-04');

-- --------------------------------------------------------

--
-- Table structure for table `registration`
--

CREATE TABLE IF NOT EXISTS `registration` (
  `srno` int(100) unsigned NOT NULL,
  `userid` varchar(20) NOT NULL,
  `fname` varchar(20) NOT NULL,
  `lname` varchar(20) NOT NULL,
  `email` varchar(50) NOT NULL,
  `password` varchar(15) NOT NULL,
  `mobile` bigint(10) unsigned NOT NULL,
  `address` varchar(200) NOT NULL,
  `status` varchar(10) NOT NULL,
  PRIMARY KEY (`srno`),
  UNIQUE KEY `userid` (`userid`),
  UNIQUE KEY `email` (`email`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `registration`
--

INSERT INTO `registration` (`srno`, `userid`, `fname`, `lname`, `email`, `password`, `mobile`, `address`, `status`) VALUES
(1, 'a1121', 'abhishek', 'Kumar', 'a@gmail.com', 'A123@@asd', 2147483647, 'apiit sd india', 'Active'),
(2, 'abhi1121', 'abhishek', 'kumar', 'abhi@gmail.com', 'A123@@asd', 9896671909, 'apiit  ', 'Active'),
(3, 'ram1121', 'ram', 'kumar', 'ram@gmail.com', 'A123@@asd', 9896671907, 'apiit  ', 'Active');

-- --------------------------------------------------------

--
-- Table structure for table `route`
--

CREATE TABLE IF NOT EXISTS `route` (
  `route_no` int(10) unsigned NOT NULL,
  `station_no` int(10) unsigned NOT NULL,
  `scode` varchar(20) NOT NULL,
  `distance` int(10) unsigned NOT NULL,
  UNIQUE KEY `route_no` (`route_no`,`station_no`),
  KEY `scode` (`scode`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `route`
--

INSERT INTO `route` (`route_no`, `station_no`, `scode`, `distance`) VALUES
(1, 1, 'PAT', 0),
(1, 2, 'ARA', 200),
(1, 3, 'KAN', 600),
(1, 4, 'DEL', 998),
(2, 1, 'PAT', 0),
(2, 2, 'BXR', 45);

-- --------------------------------------------------------

--
-- Table structure for table `running_days`
--

CREATE TABLE IF NOT EXISTS `running_days` (
  `train_id` varchar(20) NOT NULL,
  `days` varchar(20) NOT NULL,
  `status` char(1) NOT NULL,
  PRIMARY KEY (`train_id`,`days`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `running_days`
--

INSERT INTO `running_days` (`train_id`, `days`, `status`) VALUES
('12344', 'Friday', 'n'),
('12344', 'Monday', 'y'),
('12344', 'Saturday', 'n'),
('12344', 'Sunday', 'y'),
('12344', 'Thursday', 'y'),
('12344', 'Tuesday', 'n'),
('12344', 'Wednesday', 'n'),
('12346', 'Friday', 'y'),
('12346', 'Monday', 'y'),
('12346', 'Saturday', 'y'),
('12346', 'Sunday', 'n'),
('12346', 'Thursday', 'n'),
('12346', 'Tuesday', 'n'),
('12346', 'Wednesday', 'y'),
('12378', 'Friday', 'n'),
('12378', 'Monday', 'y'),
('12378', 'Saturday', 'n'),
('12378', 'Sunday', 'n'),
('12378', 'Thursday', 'n'),
('12378', 'Tuesday', 'y'),
('12378', 'Wednesday', 'y'),
('123899', 'Friday', 'n'),
('123899', 'Monday', 'y'),
('123899', 'Saturday', 'n'),
('123899', 'Sunday', 'n'),
('123899', 'Thursday', 'n'),
('123899', 'Tuesday', 'n'),
('123899', 'Wednesday', 'n'),
('12395', 'Friday', 'y'),
('12395', 'Monday', 'n'),
('12395', 'Saturday', 'y'),
('12395', 'Sunday', 'y'),
('12395', 'Thursday', 'y'),
('12395', 'Tuesday', 'y'),
('12395', 'Wednesday', 'y');

-- --------------------------------------------------------

--
-- Table structure for table `station`
--

CREATE TABLE IF NOT EXISTS `station` (
  `scode` varchar(20) NOT NULL DEFAULT '',
  `name` varchar(20) NOT NULL,
  PRIMARY KEY (`scode`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `station`
--

INSERT INTO `station` (`scode`, `name`) VALUES
('AHM', 'Ahemadabad'),
('ARA', 'Ara'),
('BXR', 'BUXAR'),
('DEL', 'Delhi'),
('KAN', 'Kanpur'),
('KRN', 'KARNAL'),
('PAN', 'PANIPAT'),
('PAT', 'Patna');

-- --------------------------------------------------------

--
-- Table structure for table `train`
--

CREATE TABLE IF NOT EXISTS `train` (
  `train_id` varchar(10) NOT NULL DEFAULT '',
  `train_name` varchar(30) NOT NULL,
  `train_type` varchar(20) NOT NULL,
  `source` varchar(20) NOT NULL,
  `destination` varchar(20) NOT NULL,
  `route` int(10) unsigned NOT NULL,
  PRIMARY KEY (`train_id`),
  KEY `source` (`source`),
  KEY `destination` (`destination`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `train`
--

INSERT INTO `train` (`train_id`, `train_name`, `train_type`, `source`, `destination`, `route`) VALUES
('12344', 'VIKRAM shilla', 'EXPRESS', 'PAT', 'KAN', 1),
('12346', 'SAMPURN KRANTI', 'EXPRESS', 'PAT', 'ARA', 1),
('12378', 'PATNA EXPRESS', 'EXPRESS', 'PAT', 'DEL', 1),
('123899', 'sdfgh', 'SUPERFAST', 'ARA', 'DEL', 1),
('12395', 'RAJDHANI EXPRESS', 'EXPRESS', 'PAT', 'DEL', 1);

-- --------------------------------------------------------

--
-- Table structure for table `train_fare`
--

CREATE TABLE IF NOT EXISTS `train_fare` (
  `train_type` varchar(20) NOT NULL,
  `fare_type` varchar(10) NOT NULL,
  `fare` int(11) NOT NULL DEFAULT '0',
  PRIMARY KEY (`train_type`,`fare_type`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `train_fare`
--

INSERT INTO `train_fare` (`train_type`, `fare_type`, `fare`) VALUES
('EXPRESS', 'FIRSTAC', 5),
('EXPRESS', 'SECONDAC', 4),
('EXPRESS', 'SLEEPER', 1),
('EXPRESS', 'THIRDAC', 3),
('SUPERFAST', 'FIRSTAC', 4),
('SUPERFAST', 'SECONDAC', 3),
('SUPERFAST', 'SLEEPER', 1),
('SUPERFAST', 'THIRDAC', 2);

-- --------------------------------------------------------

--
-- Stand-in structure for view `train_schdul`
--
CREATE TABLE IF NOT EXISTS `train_schdul` (
`train_id` varchar(10)
,`scode` varchar(20)
,`arrival_time` time
,`departure_time` time
,`day` int(10) unsigned
,`station_no` int(10) unsigned
);
-- --------------------------------------------------------

--
-- Table structure for table `train_schedule`
--

CREATE TABLE IF NOT EXISTS `train_schedule` (
  `train_id` varchar(10) NOT NULL,
  `scode` varchar(20) NOT NULL,
  `arrival_time` time NOT NULL,
  `departure_time` time NOT NULL,
  `day` int(10) unsigned NOT NULL,
  PRIMARY KEY (`train_id`,`scode`),
  KEY `scode` (`scode`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `train_schedule`
--

INSERT INTO `train_schedule` (`train_id`, `scode`, `arrival_time`, `departure_time`, `day`) VALUES
('12344', 'ARA', '12:34:56', '12:34:58', 1),
('12344', 'KAN', '12:10:16', '12:11:16', 1),
('12344', 'PAT', '00:10:12', '00:10:15', 1);

-- --------------------------------------------------------

--
-- Stand-in structure for view `train_scheduled`
--
CREATE TABLE IF NOT EXISTS `train_scheduled` (
`train_id` varchar(10)
,`scode` varchar(20)
,`station_no` int(10) unsigned
);
-- --------------------------------------------------------

--
-- Stand-in structure for view `train_search`
--
CREATE TABLE IF NOT EXISTS `train_search` (
`train_id` varchar(10)
,`train_name` varchar(30)
,`train_type` varchar(20)
,`route` int(10) unsigned
,`source` varchar(20)
,`source_point` bigint(10) unsigned
,`destination` varchar(20)
,`destination_point` bigint(10) unsigned
,`Monday` varchar(1)
,`Tuesday` varchar(1)
,`Wednesday` varchar(1)
,`Thursday` varchar(1)
,`Friday` varchar(1)
,`Saturday` varchar(1)
,`Sunday` varchar(1)
);
-- --------------------------------------------------------

--
-- Table structure for table `train_seats`
--

CREATE TABLE IF NOT EXISTS `train_seats` (
  `train_type` varchar(20) NOT NULL,
  `seat_type` varchar(10) NOT NULL,
  `seat` int(11) NOT NULL DEFAULT '0',
  PRIMARY KEY (`train_type`,`seat_type`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `train_seats`
--

INSERT INTO `train_seats` (`train_type`, `seat_type`, `seat`) VALUES
('EXPRESS', 'FIRSTAC', 2),
('EXPRESS', 'SECONDAC', 1),
('EXPRESS', 'SLEEPER', 10),
('EXPRESS', 'THIRDAC', 10),
('SUPERFAST', 'FIRSTAC', 10),
('SUPERFAST', 'SECONDAC', 10),
('SUPERFAST', 'SLEEPER', 10),
('SUPERFAST', 'THIRDAC', 10);

-- --------------------------------------------------------

--
-- Table structure for table `waitpassengerdetail`
--

CREATE TABLE IF NOT EXISTS `waitpassengerdetail` (
  `pnr` varchar(20) NOT NULL,
  `fare` int(10) unsigned NOT NULL,
  `userid` varchar(20) NOT NULL,
  `pname` varchar(20) NOT NULL,
  `page` int(10) unsigned NOT NULL,
  `gender` varchar(10) NOT NULL,
  `concession_type` varchar(20) NOT NULL,
  KEY `pnr` (`pnr`),
  KEY `userid` (`userid`),
  KEY `concession_type` (`concession_type`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `waitpassengerdetail`
--

INSERT INTO `waitpassengerdetail` (`pnr`, `fare`, `userid`, `pname`, `page`, `gender`, `concession_type`) VALUES
('PNR7754167', 4990, 'a1121', 'qwerty', 12, 'male', 'General');

-- --------------------------------------------------------

--
-- Stand-in structure for view `waitreservation`
--
CREATE TABLE IF NOT EXISTS `waitreservation` (
`pnr` varchar(20)
,`train_id` varchar(10)
,`train_name` varchar(30)
,`train_type` varchar(20)
,`source` varchar(20)
,`destination` varchar(20)
,`jdate` date
,`seat_type` varchar(10)
,`no_of_seat` int(10) unsigned
,`wait_code` char(1)
,`wait_no` int(10) unsigned
);
-- --------------------------------------------------------

--
-- Table structure for table `waitreservationdetail`
--

CREATE TABLE IF NOT EXISTS `waitreservationdetail` (
  `pnr` varchar(20) NOT NULL,
  `train_id` varchar(10) NOT NULL,
  `source` varchar(20) NOT NULL,
  `destination` varchar(20) NOT NULL,
  `jdate` date NOT NULL,
  `seat_type` varchar(10) NOT NULL,
  `no_of_seat` int(10) unsigned NOT NULL DEFAULT '1',
  `wait_code` char(1) NOT NULL DEFAULT 'W',
  `wait_no` int(10) unsigned NOT NULL,
  PRIMARY KEY (`pnr`),
  KEY `train_id` (`train_id`),
  KEY `source` (`source`),
  KEY `destination` (`destination`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `waitreservationdetail`
--

INSERT INTO `waitreservationdetail` (`pnr`, `train_id`, `source`, `destination`, `jdate`, `seat_type`, `no_of_seat`, `wait_code`, `wait_no`) VALUES
('PNR7754167', '12395', 'PAT', 'DEL', '2016-04-26', 'FIRSTAC', 1, 'W', 1);

-- --------------------------------------------------------

--
-- Structure for view `cnfreservation`
--
DROP TABLE IF EXISTS `cnfreservation`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `cnfreservation` AS select `cnfreservationdetail`.`pnr` AS `pnr`,`cnfreservationdetail`.`train_id` AS `train_id`,(select `train`.`train_name` from `train` where (`train`.`train_id` = `cnfreservationdetail`.`train_id`)) AS `train_name`,(select `train`.`train_type` from `train` where (`train`.`train_id` = `cnfreservationdetail`.`train_id`)) AS `train_type`,`cnfreservationdetail`.`source` AS `source`,`cnfreservationdetail`.`destination` AS `destination`,`cnfreservationdetail`.`jdate` AS `jdate`,`cnfreservationdetail`.`seat_type` AS `seat_type`,`cnfreservationdetail`.`no_of_seat` AS `no_of_seat`,`cnfreservationdetail`.`coach_no` AS `coach_no`,`cnfreservationdetail`.`seat_no` AS `seat_no` from `cnfreservationdetail`;

-- --------------------------------------------------------

--
-- Structure for view `train_schdul`
--
DROP TABLE IF EXISTS `train_schdul`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `train_schdul` AS select `cn`.`train_id` AS `train_id`,`cn`.`scode` AS `scode`,`de`.`arrival_time` AS `arrival_time`,`de`.`departure_time` AS `departure_time`,`de`.`day` AS `day`,`cn`.`station_no` AS `station_no` from (`train_scheduled` `cn` join `train_schedule` `de` on(((`cn`.`train_id` = `de`.`train_id`) and (`cn`.`scode` = `de`.`scode`))));

-- --------------------------------------------------------

--
-- Structure for view `train_scheduled`
--
DROP TABLE IF EXISTS `train_scheduled`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `train_scheduled` AS select `cn`.`train_id` AS `train_id`,`de`.`scode` AS `scode`,`de`.`station_no` AS `station_no` from (`train_search` `cn` join `route` `de` on(((`cn`.`route` = `de`.`route_no`) and (`cn`.`source_point` <= `de`.`station_no`) and (`cn`.`destination_point` >= `de`.`station_no`))));

-- --------------------------------------------------------

--
-- Structure for view `train_search`
--
DROP TABLE IF EXISTS `train_search`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `train_search` AS select `train`.`train_id` AS `train_id`,`train`.`train_name` AS `train_name`,`train`.`train_type` AS `train_type`,`train`.`route` AS `route`,`train`.`source` AS `source`,(select `route`.`station_no` from `route` where ((`train`.`source` = `route`.`scode`) and (`train`.`route` = `route`.`route_no`))) AS `source_point`,`train`.`destination` AS `destination`,(select `route`.`station_no` from `route` where ((`train`.`destination` = `route`.`scode`) and (`train`.`route` = `route`.`route_no`))) AS `destination_point`,(select `running_days`.`status` from `running_days` where ((`running_days`.`days` = 'Monday') and (`train`.`train_id` = `running_days`.`train_id`))) AS `Monday`,(select `running_days`.`status` from `running_days` where ((`running_days`.`days` = 'Tuesday') and (`train`.`train_id` = `running_days`.`train_id`))) AS `Tuesday`,(select `running_days`.`status` from `running_days` where ((`running_days`.`days` = 'Wednesday') and (`train`.`train_id` = `running_days`.`train_id`))) AS `Wednesday`,(select `running_days`.`status` from `running_days` where ((`running_days`.`days` = 'Thursday') and (`train`.`train_id` = `running_days`.`train_id`))) AS `Thursday`,(select `running_days`.`status` from `running_days` where ((`running_days`.`days` = 'Friday') and (`train`.`train_id` = `running_days`.`train_id`))) AS `Friday`,(select `running_days`.`status` from `running_days` where ((`running_days`.`days` = 'Saturday') and (`train`.`train_id` = `running_days`.`train_id`))) AS `Saturday`,(select `running_days`.`status` from `running_days` where ((`running_days`.`days` = 'Sunday') and (`train`.`train_id` = `running_days`.`train_id`))) AS `Sunday` from `train`;

-- --------------------------------------------------------

--
-- Structure for view `waitreservation`
--
DROP TABLE IF EXISTS `waitreservation`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `waitreservation` AS select `waitreservationdetail`.`pnr` AS `pnr`,`waitreservationdetail`.`train_id` AS `train_id`,(select `train`.`train_name` from `train` where (`train`.`train_id` = `waitreservationdetail`.`train_id`)) AS `train_name`,(select `train`.`train_type` from `train` where (`train`.`train_id` = `waitreservationdetail`.`train_id`)) AS `train_type`,`waitreservationdetail`.`source` AS `source`,`waitreservationdetail`.`destination` AS `destination`,`waitreservationdetail`.`jdate` AS `jdate`,`waitreservationdetail`.`seat_type` AS `seat_type`,`waitreservationdetail`.`no_of_seat` AS `no_of_seat`,`waitreservationdetail`.`wait_code` AS `wait_code`,`waitreservationdetail`.`wait_no` AS `wait_no` from `waitreservationdetail`;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `cnfpassengerdetail`
--
ALTER TABLE `cnfpassengerdetail`
  ADD CONSTRAINT `cnfpassengerdetail_ibfk_1` FOREIGN KEY (`pnr`) REFERENCES `cnfreservationdetail` (`pnr`) ON DELETE CASCADE ON UPDATE CASCADE,
  ADD CONSTRAINT `cnfpassengerdetail_ibfk_2` FOREIGN KEY (`userid`) REFERENCES `registration` (`userid`) ON DELETE CASCADE ON UPDATE CASCADE,
  ADD CONSTRAINT `cnfpassengerdetail_ibfk_3` FOREIGN KEY (`concession_type`) REFERENCES `concession` (`concession_type`) ON DELETE CASCADE ON UPDATE CASCADE;

--
-- Constraints for table `cnfreservationdetail`
--
ALTER TABLE `cnfreservationdetail`
  ADD CONSTRAINT `cnfreservationdetail_ibfk_1` FOREIGN KEY (`train_id`) REFERENCES `train` (`train_id`) ON DELETE CASCADE ON UPDATE CASCADE,
  ADD CONSTRAINT `cnfreservationdetail_ibfk_2` FOREIGN KEY (`source`) REFERENCES `station` (`scode`) ON DELETE CASCADE ON UPDATE CASCADE,
  ADD CONSTRAINT `cnfreservationdetail_ibfk_3` FOREIGN KEY (`destination`) REFERENCES `station` (`scode`) ON DELETE CASCADE ON UPDATE CASCADE;

--
-- Constraints for table `route`
--
ALTER TABLE `route`
  ADD CONSTRAINT `route_ibfk_1` FOREIGN KEY (`scode`) REFERENCES `station` (`scode`) ON DELETE CASCADE ON UPDATE CASCADE;

--
-- Constraints for table `running_days`
--
ALTER TABLE `running_days`
  ADD CONSTRAINT `running_days_ibfk_1` FOREIGN KEY (`train_id`) REFERENCES `train` (`train_id`) ON DELETE CASCADE ON UPDATE CASCADE;

--
-- Constraints for table `train`
--
ALTER TABLE `train`
  ADD CONSTRAINT `train_ibfk_1` FOREIGN KEY (`source`) REFERENCES `station` (`scode`) ON DELETE CASCADE ON UPDATE CASCADE,
  ADD CONSTRAINT `train_ibfk_2` FOREIGN KEY (`destination`) REFERENCES `station` (`scode`) ON DELETE CASCADE ON UPDATE CASCADE;

--
-- Constraints for table `train_schedule`
--
ALTER TABLE `train_schedule`
  ADD CONSTRAINT `train_schedule_ibfk_1` FOREIGN KEY (`scode`) REFERENCES `station` (`scode`) ON DELETE CASCADE ON UPDATE CASCADE,
  ADD CONSTRAINT `train_schedule_ibfk_2` FOREIGN KEY (`train_id`) REFERENCES `train` (`train_id`) ON DELETE CASCADE ON UPDATE CASCADE;

--
-- Constraints for table `waitpassengerdetail`
--
ALTER TABLE `waitpassengerdetail`
  ADD CONSTRAINT `waitpassengerdetail_ibfk_1` FOREIGN KEY (`pnr`) REFERENCES `waitreservationdetail` (`pnr`) ON DELETE CASCADE ON UPDATE CASCADE,
  ADD CONSTRAINT `waitpassengerdetail_ibfk_2` FOREIGN KEY (`userid`) REFERENCES `registration` (`userid`) ON DELETE CASCADE ON UPDATE CASCADE,
  ADD CONSTRAINT `waitpassengerdetail_ibfk_3` FOREIGN KEY (`concession_type`) REFERENCES `concession` (`concession_type`) ON DELETE CASCADE ON UPDATE CASCADE;

--
-- Constraints for table `waitreservationdetail`
--
ALTER TABLE `waitreservationdetail`
  ADD CONSTRAINT `waitreservationdetail_ibfk_1` FOREIGN KEY (`train_id`) REFERENCES `train` (`train_id`) ON DELETE CASCADE ON UPDATE CASCADE,
  ADD CONSTRAINT `waitreservationdetail_ibfk_2` FOREIGN KEY (`source`) REFERENCES `station` (`scode`) ON DELETE CASCADE ON UPDATE CASCADE,
  ADD CONSTRAINT `waitreservationdetail_ibfk_3` FOREIGN KEY (`destination`) REFERENCES `station` (`scode`) ON DELETE CASCADE ON UPDATE CASCADE;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
